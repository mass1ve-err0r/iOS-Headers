/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSystemAlertDialogTask : AMSTask {
    long long  _defaultButtonIndex;
    bool  _dismissOnHomeButton;
    bool  _dismissOnLock;
    bool  _displaysOnLockscreen;
    AMSDialogRequest * _request;
    bool  _shouldDismissAfterUnlock;
    bool  _shouldDisplayAsTopMost;
    bool  _shouldPendInSetupIfNotAllowed;
    long long  _unlockActionButtonIndex;
}

@property long long defaultButtonIndex;
@property bool dismissOnHomeButton;
@property bool dismissOnLock;
@property bool displaysOnLockscreen;
@property (nonatomic, readonly) AMSDialogRequest *request;
@property bool shouldDismissAfterUnlock;
@property bool shouldDisplayAsTopMost;
@property bool shouldPendInSetupIfNotAllowed;
@property long long unlockActionButtonIndex;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_createNoteDictionaryWithKeys:(struct ButtonKey { struct __CFString {} *x1; int x2; }*)arg1 buttonActions:(id)arg2 outOptions:(unsigned long long*)arg3;
- (struct __CFUserNotification { }*)_createNotificationFromDictionary:(struct __CFDictionary { }*)arg1 options:(unsigned long long)arg2;
- (long long)_defaultButtonIndexForActions:(id)arg1;
- (id)_handleResponseForNote:(struct __CFUserNotification { }*)arg1 buttonActions:(id)arg2 keys:(struct ButtonKey { struct __CFString {} *x1; int x2; }*)arg3;
- (long long)_keyboardTypeFor:(long long)arg1;
- (id)_reorderButtonActions;
- (long long)defaultButtonIndex;
- (bool)dismissOnHomeButton;
- (bool)dismissOnLock;
- (bool)displaysOnLockscreen;
- (id)initWithRequest:(id)arg1;
- (id)present;
- (id)request;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDismissOnHomeButton:(bool)arg1;
- (void)setDismissOnLock:(bool)arg1;
- (void)setDisplaysOnLockscreen:(bool)arg1;
- (void)setShouldDismissAfterUnlock:(bool)arg1;
- (void)setShouldDisplayAsTopMost:(bool)arg1;
- (void)setShouldPendInSetupIfNotAllowed:(bool)arg1;
- (void)setUnlockActionButtonIndex:(long long)arg1;
- (bool)shouldDismissAfterUnlock;
- (bool)shouldDisplayAsTopMost;
- (bool)shouldPendInSetupIfNotAllowed;
- (long long)unlockActionButtonIndex;

@end
