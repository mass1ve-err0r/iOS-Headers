//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPSReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

