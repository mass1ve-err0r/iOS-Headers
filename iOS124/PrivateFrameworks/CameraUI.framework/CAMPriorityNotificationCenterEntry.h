//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMPriorityNotificationCenterEntry : NSObject
{
    id _observer;
    SEL _selector;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end

