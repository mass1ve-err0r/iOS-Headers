//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVTemplateTreeNode : NSObject
{
    NSMutableArray *_derivedTemplateNodes;
    _Bool _isAbstract;
    NSString *_templateName;
    NSArray *_styleSheetURLs;
    NSArray *_finalURLs;
}

@property(copy, nonatomic) NSArray *finalURLs; // @synthesize finalURLs=_finalURLs;
@property(readonly, nonatomic) _Bool isAbstract; // @synthesize isAbstract=_isAbstract;
@property(readonly, copy, nonatomic) NSArray *styleSheetURLs; // @synthesize styleSheetURLs=_styleSheetURLs;
@property(readonly, copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void).cxx_destruct;
- (void)addDerivedTemplateNode:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *derivedTemplateNodes;
- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 abstract:(_Bool)arg3;
- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2;

@end

