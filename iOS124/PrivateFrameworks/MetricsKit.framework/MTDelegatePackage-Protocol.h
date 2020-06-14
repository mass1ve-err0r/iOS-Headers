//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/NSObject-Protocol.h>

@protocol MTConfigDelegate, MTEnvironmentDelegate, MTEventRecorderDelegate;

@protocol MTDelegatePackage <NSObject>
@property(readonly, nonatomic) id <MTEnvironmentDelegate> environmentDelegate;
@property(readonly, nonatomic) id <MTEventRecorderDelegate> eventRecorderDelegate;
@property(readonly, nonatomic) id <MTConfigDelegate> configDelegate;
@end

