using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net.Http;
using Windows.ApplicationModel.Background;
using Windows.Devices.AllJoyn;
using RoverRobotAllJoynProducer.Models;
using org.alljoyn.example.Rover;

// The Background Application template is documented at http://go.microsoft.com/fwlink/?LinkID=533884&clcid=0x409

namespace RoverRobotAllJoynProducer
{
    public sealed class StartupTask : IBackgroundTask
    {
        BackgroundTaskDeferral deferral;
        AllJoynBusAttachment roverBusAttachment = new AllJoynBusAttachment();
        RoverProducer roverProducer;
        Rover rover;


        public void Run(IBackgroundTaskInstance taskInstance)
        {
            rover = new Rover();
            deferral = taskInstance.GetDeferral();

            roverBusAttachment.AboutData.DefaultDescription = "Rover the Robot";
            roverProducer = new RoverProducer(roverBusAttachment);
            roverProducer.Service = new RoverService(rover);
            roverProducer.Start();
        }
    }
}
