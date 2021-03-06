//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace example { namespace Rover {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IRoverService. Instead, RoverServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class RoverServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IRoverService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverLeftCalledEventArgs^>^ LeftCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverLeftCalledEventArgs^>^ handler) 
        { 
            return _LeftCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<RoverServiceEventAdapter^>(sender), safe_cast<RoverLeftCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _LeftCalled -= token; 
        } 
    internal: 
        void raise(RoverServiceEventAdapter^ sender, RoverLeftCalledEventArgs^ args) 
        { 
            _LeftCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverRightCalledEventArgs^>^ RightCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverRightCalledEventArgs^>^ handler) 
        { 
            return _RightCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<RoverServiceEventAdapter^>(sender), safe_cast<RoverRightCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _RightCalled -= token; 
        } 
    internal: 
        void raise(RoverServiceEventAdapter^ sender, RoverRightCalledEventArgs^ args) 
        { 
            _RightCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverForwardCalledEventArgs^>^ ForwardCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverForwardCalledEventArgs^>^ handler) 
        { 
            return _ForwardCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<RoverServiceEventAdapter^>(sender), safe_cast<RoverForwardCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ForwardCalled -= token; 
        } 
    internal: 
        void raise(RoverServiceEventAdapter^ sender, RoverForwardCalledEventArgs^ args) 
        { 
            _ForwardCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverBackwardCalledEventArgs^>^ BackwardCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverBackwardCalledEventArgs^>^ handler) 
        { 
            return _BackwardCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<RoverServiceEventAdapter^>(sender), safe_cast<RoverBackwardCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _BackwardCalled -= token; 
        } 
    internal: 
        void raise(RoverServiceEventAdapter^ sender, RoverBackwardCalledEventArgs^ args) 
        { 
            _BackwardCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverStopCalledEventArgs^>^ StopCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverStopCalledEventArgs^>^ handler) 
        { 
            return _StopCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<RoverServiceEventAdapter^>(sender), safe_cast<RoverStopCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _StopCalled -= token; 
        } 
    internal: 
        void raise(RoverServiceEventAdapter^ sender, RoverStopCalledEventArgs^ args) 
        { 
            _StopCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverAutonomousCalledEventArgs^>^ AutonomousCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverAutonomousCalledEventArgs^>^ handler) 
        { 
            return _AutonomousCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<RoverServiceEventAdapter^>(sender), safe_cast<RoverAutonomousCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _AutonomousCalled -= token; 
        } 
    internal: 
        void raise(RoverServiceEventAdapter^ sender, RoverAutonomousCalledEventArgs^ args) 
        { 
            _AutonomousCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverManualCalledEventArgs^>^ ManualCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<RoverServiceEventAdapter^, RoverManualCalledEventArgs^>^ handler) 
        { 
            return _ManualCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<RoverServiceEventAdapter^>(sender), safe_cast<RoverManualCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ManualCalled -= token; 
        } 
    internal: 
        void raise(RoverServiceEventAdapter^ sender, RoverManualCalledEventArgs^ args) 
        { 
            _ManualCalled(sender, args);
        } 
    }

    // Property Read Events
    // Property Write Events
    // IRoverService Implementation
    virtual Windows::Foundation::IAsyncOperation<RoverLeftResult^>^ LeftAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<RoverRightResult^>^ RightAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<RoverForwardResult^>^ ForwardAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<RoverBackwardResult^>^ BackwardAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<RoverStopResult^>^ StopAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<RoverAutonomousResult^>^ AutonomousAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<RoverManualResult^>^ ManualAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);



private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _LeftCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _RightCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _ForwardCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _BackwardCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _StopCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _AutonomousCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _ManualCalled;
};

} } } } 
