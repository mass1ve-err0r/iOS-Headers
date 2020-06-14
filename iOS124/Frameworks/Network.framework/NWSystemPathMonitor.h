//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NWMonitor, NWPathEvaluator;
@protocol OS_dispatch_source;

@interface NWSystemPathMonitor : NSObject
{
    _Bool _wifiPrimary;
    _Bool _ethernetPrimary;
    _Bool _vpnActive;
    int _vpnNotifyToken;
    NWMonitor *_vpnMonitor;
    NWPathEvaluator *_primaryEvaluator;
    NSMutableDictionary *_perAppVPNEvaluators;
    NSObject<OS_dispatch_source> *_smoothingTimer;
    struct tcp_connection_fallback_watch_s *_fallbackWatcher;
    NSObject<OS_dispatch_source> *_mptcpWatcher;
}

+ (id)sharedSystemPathMonitor;
@property NSObject<OS_dispatch_source> *mptcpWatcher; // @synthesize mptcpWatcher=_mptcpWatcher;
@property struct tcp_connection_fallback_watch_s *fallbackWatcher; // @synthesize fallbackWatcher=_fallbackWatcher;
@property(retain) NSObject<OS_dispatch_source> *smoothingTimer; // @synthesize smoothingTimer=_smoothingTimer;
@property(retain) NSMutableDictionary *perAppVPNEvaluators; // @synthesize perAppVPNEvaluators=_perAppVPNEvaluators;
@property int vpnNotifyToken; // @synthesize vpnNotifyToken=_vpnNotifyToken;
@property(retain) NWPathEvaluator *primaryEvaluator; // @synthesize primaryEvaluator=_primaryEvaluator;
@property(retain) NWMonitor *vpnMonitor; // @synthesize vpnMonitor=_vpnMonitor;
@property(nonatomic, getter=isVPNActive) _Bool vpnActive; // @synthesize vpnActive=_vpnActive;
@property(nonatomic, getter=isEthernetPrimary) _Bool ethernetPrimary; // @synthesize ethernetPrimary=_ethernetPrimary;
@property(nonatomic, getter=isWiFiPrimary) _Bool wifiPrimary; // @synthesize wifiPrimary=_wifiPrimary;
- (void).cxx_destruct;
- (void)updateVPNMonitor;
- (void)registerForVPNNotifications;
- (void)stopWatchingApplicationStates;
- (void)startWatchingApplicationStates;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)eventFired;
- (void)updateFlags;
- (void)dealloc;
- (id)init;

@end

