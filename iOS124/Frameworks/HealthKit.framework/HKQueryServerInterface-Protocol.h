//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@protocol HKQueryServerInterface <NSObject>
- (void)remote_deactivateServer;
- (void)remote_startQueryWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

