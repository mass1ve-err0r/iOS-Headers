//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject
{
    FTCServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(readonly, retain, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) FTCServiceMonitor *monitor; // @synthesize monitor=_monitor;
- (_Bool)removeListenerID:(id)arg1;
- (_Bool)addListenerID:(id)arg1;
- (_Bool)hasListenerID:(id)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

