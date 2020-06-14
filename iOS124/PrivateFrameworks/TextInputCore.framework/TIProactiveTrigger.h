//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying>
{
    unsigned char _triggerSourceType;
    NSDictionary *_attributes;
}

@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) unsigned char triggerSourceType; // @synthesize triggerSourceType=_triggerSourceType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2;

@end

