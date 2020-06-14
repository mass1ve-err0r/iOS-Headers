//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/NSCopying-Protocol.h>

@class NSString;

@interface ICRankingQueryDescriptor : NSObject <NSCopying>
{
    NSString *_fieldName;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFieldName:(id)arg1 type:(long long)arg2;

@end

