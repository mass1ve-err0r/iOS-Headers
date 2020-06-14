//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop;
@protocol AXDeviceMonitorDelegate;

@interface AXDeviceMonitor : NSObject
{
    NSRunLoop *_targetRunLoop;
    struct __IOHIDManager *_hidManager;
    unsigned long long _state;
    id <AXDeviceMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <AXDeviceMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)informDelegate;
- (void)invalidate;
- (void)begin;
- (id)copyDevices;
- (void)dealloc;
- (id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2;

@end
