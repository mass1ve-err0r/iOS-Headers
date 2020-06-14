//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INNote : NSObject <INImageProxyInjecting, INCacheableContainer, NSCopying, NSSecureCoding>
{
    INSpeakableString *_title;
    NSArray *_contents;
    INSpeakableString *_groupName;
    NSDateComponents *_createdDateComponents;
    NSDateComponents *_modifiedDateComponents;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents; // @synthesize modifiedDateComponents=_modifiedDateComponents;
@property(readonly, copy, nonatomic) NSDateComponents *createdDateComponents; // @synthesize createdDateComponents=_createdDateComponents;
@property(readonly, copy, nonatomic) INSpeakableString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic, setter=_setContents:) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, copy, nonatomic) INSpeakableString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

