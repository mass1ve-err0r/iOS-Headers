//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTAvatarAttributeEditorSectionController, AVTAvatarAttributeEditorSectionItem;

@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate <NSObject>
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id <AVTAvatarAttributeEditorSectionController>)arg1;
- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didUpdateSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didSelectSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
@end

