//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/NSSecureCoding-Protocol.h>

@class NSShadow;

@interface _MFNSShadow : NSObject <NSSecureCoding>
{
    NSShadow *_shadow;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithShadow:(id)arg1;

@end

