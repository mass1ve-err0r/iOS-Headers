//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;
@protocol NFDefinitionContainer;

@interface NFDefinition : NSObject
{
    _Bool _canBeOverridden;
    _Bool _canBeNil;
    unsigned long long _source;
    Class _cls;
    Protocol *_protocol;
    CDUnknownBlockType _factory;
    unsigned long long _scope;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _configurationBlock;
    id <NFDefinitionContainer> _privateAccessContainer;
}

@property(retain, nonatomic) id <NFDefinitionContainer> privateAccessContainer; // @synthesize privateAccessContainer=_privateAccessContainer;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
@property(nonatomic) _Bool canBeNil; // @synthesize canBeNil=_canBeNil;
@property(nonatomic) _Bool canBeOverridden; // @synthesize canBeOverridden=_canBeOverridden;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(copy, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)withPrivateAccessInContainer:(id)arg1;
- (id)canBeNil:(_Bool)arg1;
- (id)canBeOverridden:(_Bool)arg1;
- (id)withConfiguration:(CDUnknownBlockType)arg1;
- (id)withValidation:(CDUnknownBlockType)arg1;
- (id)inScope:(unsigned long long)arg1;
- (id)description;
- (id)initWithUnsafeFactory:(CDUnknownBlockType)arg1;
- (id)initWithProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)initWithClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;

@end

