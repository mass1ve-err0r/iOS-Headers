//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIResponder, UITextInteractionInputDelegate, UIView;
@protocol UITextInput, UITextInteractionDelegate, UITextInteraction_AssistantDelegate;

@interface UITextInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UITextInteraction *_parent;
    NSMutableArray *_children;
    NSMutableArray *_gestures;
    NSMutableDictionary *_gestureMap;
    _Bool _inGesture;
    long long _textInteractionSet;
    id <UITextInteractionDelegate> _delegate;
    UIResponder<UITextInput> *_textInput;
    UIView *_view;
    UITextInteractionInputDelegate *_interactionInputDelegate;
    id <UITextInteraction_AssistantDelegate> _assistantDelegate;
}

+ (id)textInteractionsForSet:(long long)arg1;
@property(nonatomic) __weak id <UITextInteraction_AssistantDelegate> assistantDelegate; // @synthesize assistantDelegate=_assistantDelegate;
@property(retain, nonatomic) UITextInteractionInputDelegate *interactionInputDelegate; // @synthesize interactionInputDelegate=_interactionInputDelegate;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
@property(nonatomic) __weak id <UITextInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *gestureMap; // @synthesize gestureMap=_gestureMap;
@property(readonly, nonatomic) NSArray *gestures; // @synthesize gestures=_gestures;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (id)defaultTapRecognizerWithAction:(SEL)arg1;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)arg1;
- (_Bool)shouldHandleFormGestureAtLocation:(struct CGPoint)arg1;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (double)distanceBetweenPoint:(struct CGPoint)arg1 andRects:(id)arg2;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (_Bool)selection:(id)arg1 containsPoint:(struct CGPoint)arg2;
- (void)disableClearsOnInsertion;
- (_Bool)containerChangesSelectionOnOneFingerTap;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)arg1;
- (id)_textInput;
- (_Bool)_shouldObscureTextInput;
- (_Bool)shouldIgnoreLinkGestures;
- (_Bool)isInteractingWithLink;
- (id)linkInteractionView;
- (void)_resetForLink;
- (void)resetForLink;
- (void)cancelInteractionWithLink;
- (_Bool)tapOnLinkWithGesture:(id)arg1;
@property(readonly, nonatomic) NSArray *gesturesForFailureRequirements;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (_Bool)shouldAllowWithTouchTypes:(id)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
@property(nonatomic, setter=setInGesture:) _Bool inGesture; // @synthesize inGesture=_inGesture;
@property(readonly, nonatomic) long long textInteractionSet; // @synthesize textInteractionSet=_textInteractionSet;
- (id)recognizerForName:(id)arg1;
- (void)removeGestureRecognizerWithName:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 withName:(id)arg2;
- (_Bool)doesControlDelegate;
@property(readonly) __weak UITextInteraction *root;
@property(readonly) __weak UITextInteraction *parent;
- (void)finishSetup;
- (id)interactionWithClass:(Class)arg1;
- (id)interactionWithGestureForName:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

