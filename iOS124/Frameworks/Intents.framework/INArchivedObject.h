//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface INArchivedObject : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_typeName;
    NSData *_messageData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
@property(readonly, copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTypeName:(id)arg1 messageData:(id)arg2;

@end

