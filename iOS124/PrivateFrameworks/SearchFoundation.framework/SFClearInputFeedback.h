//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@interface SFClearInputFeedback : SFFeedback
{
    unsigned long long _triggerEvent;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;

@end

