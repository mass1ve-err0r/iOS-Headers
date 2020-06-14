//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFMessageBodyParserObject.h>

@class NSError, NSMutableArray;

@interface MFMessageBodyParser : MFMessageBodyParserObject
{
    NSMutableArray *_subparsers;
    NSMutableArray *_elementPool;
    NSMutableArray *_paragraphNodes;
    CDUnknownBlockType _foundMessageBodyElementBlock;
    NSError *_parserError;
    struct __CFArray *_nodesStackCache;
    struct __CFDictionary *_nodesLevelCache;
    struct __CFDictionary *_nodesQuoteLevelCache;
    unsigned long long _options;
}

+ (_Bool)isLinebreakImpliedAfterTagName:(id)arg1;
+ (_Bool)isLinebreakImpliedBeforeTagName:(id)arg1;
+ (_Bool)cacheRetainsNodes;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void)getLevel:(long long *)arg1 quoteLevel:(long long *)arg2 forBodyNode:(id)arg3;
- (unsigned long long)quoteLevelForBodyNode:(id)arg1;
- (void)didFindError:(id)arg1;
- (void)didFinishParsing;
- (void)willBeginParsing;
- (void)didFindBodyElement:(id)arg1;
- (void)flushParagraphNodes;
- (void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyStringAccumulatorClass;
- (_Bool)shouldIgnoreTagWithTagName:(id)arg1;
- (_Bool)isLandmarkTagName:(id)arg1;
- (id)getAvailableMessageBodyElement;
- (void)removeSubparser:(id)arg1;
- (void)addSubparser:(id)arg1;
- (void)setFoundMessageBodyElementBlock:(CDUnknownBlockType)arg1;
- (id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2;
- (id)parserError;
- (void)copyBlocks;
- (_Bool)shouldProceedParsing;
- (_Bool)parse;
- (void)dealloc;
- (id)init;

@end

