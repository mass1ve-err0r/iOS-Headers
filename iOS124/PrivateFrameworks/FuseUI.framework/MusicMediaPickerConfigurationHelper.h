//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicMediaPickerConfigurationHelper : NSObject
{
}

+ (id)_mediaPickerNavigationControllerForViewController:(id)arg1;
+ (void)stylizeContentsOfDescriptor:(id)arg1;
+ (void)removeAllActionsFromDescriptor:(id)arg1;
+ (void)pushViewController:(id)arg1 fromViewController:(id)arg2;
+ (void)pushViewControllerFromConfiguration:(id)arg1 fromViewController:(id)arg2 withTitle:(id)arg3;
+ (void)pushSongsViewControllerForEntityValueProvider:(id)arg1 persistentIDPropertyName:(id)arg2 titlePropertyName:(id)arg3 predicatePersistentIDPropertyName:(id)arg4 fromViewController:(id)arg5;
+ (void)pushAlbumsViewControllerForEntityValueProvider:(id)arg1 persistentIDPropertyName:(id)arg2 titlePropertyName:(id)arg3 predicatePersistentIDPropertyName:(id)arg4 viewController:(id)arg5;
+ (void)includeDisclosureIndicatorInDescriptor:(id)arg1;
+ (void)includeDisclosureIndicatorInDescriptor:(id)arg1 conditionalOnPlaylistFolder:(_Bool)arg2;
+ (void)includeAddButtonInDescriptor:(id)arg1;
+ (void)handleSelectionOfMediaItemsInCollection:(id)arg1 fromViewController:(id)arg2;
+ (void)handleSelectionOfMediaItem:(id)arg1 fromViewController:(id)arg2;

@end

