//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextPasteCoordinatorDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol UITextPasteConfigurationSupporting_Internal;

__attribute__((visibility("hidden")))
@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate>
{
    NSMapTable *_sessions;
    id <UITextPasteConfigurationSupporting_Internal> _supportingView;
}

+ (id)combineAttributedStrings:(id)arg1 addingSeparation:(_Bool)arg2;
@property(nonatomic) __weak id <UITextPasteConfigurationSupporting_Internal> supportingView; // @synthesize supportingView=_supportingView;
- (void).cxx_destruct;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 progressSupport:(id)arg3 animator:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;
- (void)_transformTextPasteItem:(id)arg1;
- (id)_clampRange:(id)arg1;
- (void)_executePasteForSession:(id)arg1 animator:(id)arg2;
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3;
- (id)initWithSupportingView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

