//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssertionServices/BKSAssertionEvent.h>

@class NSString;

@interface BKSTerminationAssertionUpdateEvent : BKSAssertionEvent
{
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end

