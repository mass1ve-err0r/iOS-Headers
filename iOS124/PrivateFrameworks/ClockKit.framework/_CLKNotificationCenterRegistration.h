//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CLKNotificationCenterRegistration : NSObject
{
    unsigned long long _registrationIdentifier;
    id _observer;
    SEL _selector;
}

+ (id)recycledRegistrationWithIdentifier:(unsigned long long)arg1;
+ (void)recycleRegistration:(id)arg1;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)recycledCopy;

@end

