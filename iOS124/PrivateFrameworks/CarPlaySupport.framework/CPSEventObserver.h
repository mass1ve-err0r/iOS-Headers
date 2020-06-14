//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CPSEventObserverDelegate;

@interface CPSEventObserver : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;
    id <CPSEventObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <CPSEventObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct __IOHIDEventSystemClient *hidSystemClient; // @synthesize hidSystemClient=_hidSystemClient;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleEvent:(struct __IOHIDEvent *)arg1;
- (id)initWithDelegate:(id)arg1;

@end
