//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@interface CXSetRelayingCallAction : CXCallAction
{
    _Bool _relaying;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isRelaying) _Bool relaying; // @synthesize relaying=_relaying;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 relaying:(_Bool)arg2;

@end

