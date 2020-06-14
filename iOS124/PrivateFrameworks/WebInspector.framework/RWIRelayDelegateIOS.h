//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/RWIRelayDelegate-Protocol.h>

@class BKSApplicationStateMonitor, RWIRelay, _RWITCPServer;

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate>
{
    RWIRelay *_relay;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    _RWITCPServer *_tcpServer;
}

- (void).cxx_destruct;
- (void)tcpServer:(id)arg1 receivedConnection:(id)arg2;
- (void)_backBoardApplicationStateChanged:(id)arg1;
- (_Bool)_isWhitelistedSimulatorApp:(id)arg1;
- (_Bool)_usedDevelopmentProvisioningProfile:(CDStruct_6ad76789)arg1;
- (_Bool)_hasCarrierRemoteInspectorEntitlement:(CDStruct_6ad76789)arg1;
- (_Bool)_hasRemoteInspectorEntitlement:(CDStruct_6ad76789)arg1;
- (_Bool)_isProxyApplication:(id)arg1 bundleIdentifier:(id)arg2;
- (id)relaySetupResponseForClientConnection:(id)arg1;
- (void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2;
- (void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2;
- (void)relayClientConnectionDidChange:(id)arg1;
- (void)relay:(id)arg1 applicationUpdated:(id)arg2;
- (void)relay:(id)arg1 applicationDisconnected:(id)arg2;
- (void)relay:(id)arg1 applicationConnected:(id)arg2;
- (void)_createApplicationStateMonitorIfNeeded;
- (id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (_Bool)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (_Bool)relay:(id)arg1 allowIncomingApplicationViaProxy:(CDStruct_6ad76789)arg2;
- (_Bool)_allowApplication:(CDStruct_6ad76789)arg1 bundleIdentifier:(id)arg2;
- (void)relayInitialize:(id)arg1;

@end

