//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRTextInputTraitsProtobuf;

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying>
{
    _MRTextInputTraitsProtobuf *_inputTraits;
    NSString *_prompt;
    NSString *_title;
}

@property(retain, nonatomic) _MRTextInputTraitsProtobuf *inputTraits; // @synthesize inputTraits=_inputTraits;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasInputTraits;
@property(readonly, nonatomic) _Bool hasPrompt;
@property(readonly, nonatomic) _Bool hasTitle;

@end

