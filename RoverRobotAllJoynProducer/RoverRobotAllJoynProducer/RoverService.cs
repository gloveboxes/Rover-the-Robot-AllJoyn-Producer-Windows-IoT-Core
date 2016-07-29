using org.alljoyn.example.Rover;
using RoverRobotAllJoynProducer.Models;
using System;
using System.Diagnostics;
using System.Threading.Tasks;
using Windows.Devices.AllJoyn;
using Windows.Foundation;

namespace RoverRobotAllJoynProducer
{
    class RoverService : IRoverService
    {
        Rover rover;

        public RoverService(Rover rover)
        {
            this.rover = rover;
        }

        IAsyncOperation<RoverBackwardResult> IRoverService.BackwardAsync(AllJoynMessageInfo info)
        {

            Task<RoverBackwardResult> task = new Task<RoverBackwardResult>(() =>
            {
                rover.Backward();
                return RoverBackwardResult.CreateSuccessResult();
            });

            task.Start();
            return task.AsAsyncOperation();

        }

        IAsyncOperation<RoverForwardResult> IRoverService.ForwardAsync(AllJoynMessageInfo info)
        {
            Task<RoverForwardResult> task = new Task<RoverForwardResult>(() =>
            {
                rover.Forward();
                return RoverForwardResult.CreateSuccessResult();
            });

            task.Start();
            return task.AsAsyncOperation();
        }

        IAsyncOperation<RoverLeftResult> IRoverService.LeftAsync(AllJoynMessageInfo info)
        {
            Task<RoverLeftResult> task = new Task<RoverLeftResult>(() =>
            {
                rover.Left();
                return RoverLeftResult.CreateSuccessResult();
            });

            task.Start();
            return task.AsAsyncOperation();
        }

        IAsyncOperation<RoverRightResult> IRoverService.RightAsync(AllJoynMessageInfo info)
        {

            Task<RoverRightResult> task = new Task<RoverRightResult>(() =>
            {
                rover.Right();
                return RoverRightResult.CreateSuccessResult();
            });

            task.Start();
            return task.AsAsyncOperation();

        }


        IAsyncOperation<RoverStopResult> IRoverService.StopAsync(AllJoynMessageInfo info)
        {
            Task<RoverStopResult> task = new Task<RoverStopResult>(() =>
            {
                Task.Run(() => rover.Stop());
                return RoverStopResult.CreateSuccessResult();
            });

            task.Start();
            return task.AsAsyncOperation();
        }

        public IAsyncOperation<RoverManualResult> ManualAsync(AllJoynMessageInfo info)
        {
            Task<RoverManualResult> task = new Task<RoverManualResult>(() =>
            {

                return RoverManualResult.CreateSuccessResult();
            });

            task.Start();
            return task.AsAsyncOperation();
        }

        public IAsyncOperation<RoverAutonomousResult> AutonomousAsync(AllJoynMessageInfo info)
        {
            Task<RoverAutonomousResult> task = new Task<RoverAutonomousResult>(() =>
            {

                return RoverAutonomousResult.CreateSuccessResult();
            });

            task.Start();
            return task.AsAsyncOperation();
        }
    }
}
