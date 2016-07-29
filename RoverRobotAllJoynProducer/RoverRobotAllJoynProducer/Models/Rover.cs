using Glovebox.IoT.Devices.Actuators;
using Glovebox.IoT.Devices.HATs;

namespace RoverRobotAllJoynProducer.Models
{
    public sealed class Rover
    {

        ExplorerHatPro hat = new ExplorerHatPro();
        Motor motorLeft;
        Motor motorRight;

        public Rover()
        {
            motorLeft = hat.Motor(ExplorerHatPro.MotorId.MotorOne);
            motorRight = hat.Motor(ExplorerHatPro.MotorId.MotorTwo);
        }

        public void Forward()
        {
            motorLeft.Forward();
            motorRight.Forward();
        }

        public void Backward()
        {
            motorLeft.Backward();
            motorRight.Backward();
        }

        public void Stop()
        {
            motorLeft.Stop();
            motorRight.Stop();
        }

        public void Left()
        {
            motorLeft.Stop();
            motorRight.Forward();
        }
        public void Right()
        {
            motorLeft.Forward();
            motorRight.Stop();
        }
    }
}
