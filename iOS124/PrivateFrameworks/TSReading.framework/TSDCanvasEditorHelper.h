//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKChangeSourceObserver-Protocol.h>

@class NSString, TSKChangeNotifier;
@protocol TSDCanvasEditor;

@interface TSDCanvasEditorHelper : NSObject <TSKChangeSourceObserver>
{
    TSKChangeNotifier *mChangeNotifier;
    id <TSDCanvasEditor> mCanvasEditor;
    _Bool mTornDown;
}

+ (_Bool)physicalKeyboardIsSender:(id)arg1;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (id)canvasSelectionWithInfos:(id)arg1;
+ (Class)selectionClass;
- (_Bool)canDeleteComment;
- (id)layoutsForAlignAndDistribute;
- (_Bool)p_canReduceFileSizeForSelectedImages;
- (_Bool)canGroupDrawables:(id)arg1;
- (void)p_copy:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)p_selectionContainsInlineObjects:(id)arg1;
- (_Bool)canUngroupWithSelection:(id)arg1;
- (int)canvasEditorCanPerformLockAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformMaskWithShapeTypeWithSender:(id)arg1;
- (_Bool)canPerformMaskWithShapeWithSender:(id)arg1;
- (_Bool)canPerformUnmaskWithSender:(id)arg1;
- (_Bool)canPerformMaskWithSender:(id)arg1;
- (int)canvasEditorCanPerformDistributeAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformAlignAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformUngroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformGroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformSelectAllAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDuplicateAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCutAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyStyleAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDeleteAction:(SEL)arg1 withSender:(id)arg2;
- (id)infosFromCanvasSelection:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (id)canvasSelectionWithInfos:(id)arg1;
- (id)canvasSelectionFromRep:(id)arg1;
- (void)pushNewEditorForSelection:(id)arg1;
- (id)newEditorForEditorClass:(Class)arg1;
- (id)editorToPopToOnEndEditingForSelection:(id)arg1;
- (Class)editorClassForSelection:(id)arg1;
- (Class)editorClassForSelectionIgnoringLockedState:(id)arg1;
- (Class)p_editorClassForSelection:(id)arg1 shouldIgnoreLockedState:(_Bool)arg2;
- (void)notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (_Bool)isRepSelectable:(id)arg1;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)dealloc;
- (void)teardown;
- (id)interactiveCanvasController;
- (id)documentRoot;
- (id)canvasEditor;
- (id)initWithCanvasEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

