//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKKeyboardObserver-Protocol.h>

@class NSString;

@interface TSWPEditMenuController : NSObject <TSKKeyboardObserver>
{
    int _menuState;
    _Bool _showMenuOnKeyboard;
    _Bool _isBeginningEditing;
}

+ (_Bool)isAnimating;
+ (void)hideEditMenu;
+ (void)showEditMenuAtTargetRect:(struct CGRect)arg1 canCenterHUD:(_Bool)arg2 interactiveCanvasController:(id)arg3;
+ (void)p_showEditMenuForInteractiveCanvasController:(id)arg1;
+ (id)sharedEditMenuController;
+ (int)menuState;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)p_sharedEditMenuController;
+ (id)_singletonAlloc;
@property(nonatomic) _Bool isBeginningEditing; // @synthesize isBeginningEditing=_isBeginningEditing;
@property(nonatomic) _Bool showMenuOnKeyboard; // @synthesize showMenuOnKeyboard=_showMenuOnKeyboard;
- (void)p_clearIsBeginningEditing;
- (void)p_didAnimateKeyboard;
- (void)p_didHideMenu:(id)arg1;
- (void)p_willHideMenu:(id)arg1;
- (void)p_didShowMenu:(id)arg1;
- (void)p_willShowMenu:(id)arg1;
- (void)p_setMenuVisible:(id)arg1;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardDidShowOrDock:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

