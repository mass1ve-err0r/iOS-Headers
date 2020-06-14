//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSPPasteboardObject : TSPObject
{
    _Bool _isCrossAppPaste;
    _Bool _isCrossDocumentPaste;
    _Bool _isTextPrimary;
    _Bool _isSmartCopyPaste;
    NSArray *_drawables;
    NSArray *_styles;
    TSPObject *_stylesheet;
    TSPObject *_wpStorage;
    TSPObject *_guideStorage;
    NSArray *_topLevelObjects;
    TSPObject *_appNativeObject;
    TSPObject *_nativeContentDescription;
}

@property(retain, nonatomic) TSPObject *nativeContentDescription; // @synthesize nativeContentDescription=_nativeContentDescription;
@property(nonatomic) _Bool isSmartCopyPaste; // @synthesize isSmartCopyPaste=_isSmartCopyPaste;
@property(nonatomic) _Bool isTextPrimary; // @synthesize isTextPrimary=_isTextPrimary;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste; // @synthesize isCrossDocumentPaste=_isCrossDocumentPaste;
@property(readonly, nonatomic) _Bool isCrossAppPaste; // @synthesize isCrossAppPaste=_isCrossAppPaste;
@property(retain, nonatomic) TSPObject *appNativeObject; // @synthesize appNativeObject=_appNativeObject;
@property(retain, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects=_topLevelObjects;
@property(retain, nonatomic) TSPObject *guideStorage; // @synthesize guideStorage=_guideStorage;
@property(retain, nonatomic) TSPObject *wpStorage; // @synthesize wpStorage=_wpStorage;
@property(retain, nonatomic) TSPObject *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(copy, nonatomic) NSArray *drawables; // @synthesize drawables=_drawables;
- (void).cxx_destruct;
- (long long)tsp_identifier;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

