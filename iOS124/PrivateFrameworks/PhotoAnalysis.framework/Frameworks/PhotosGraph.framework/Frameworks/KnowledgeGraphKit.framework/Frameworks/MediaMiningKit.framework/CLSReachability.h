//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _localWiFiRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (_Bool)connectionRequired;
- (long long)currentNetworkStatus;
- (long long)_networkStatusForFlags:(unsigned int)arg1;
- (long long)_localWiFiStatusForFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)dealloc;
- (id)initWithNetworkReachability:(struct __SCNetworkReachability *)arg1;

@end

