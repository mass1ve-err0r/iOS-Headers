//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionHorizontalSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailKaleidoscopeEditOptionCellDelegate-Protocol.h>

@class NSString, NTKCompanionKaleidoscopeEditor, UIImagePickerController, UIViewController;
@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate>
{
    NTKCompanionKaleidoscopeEditor *_editor;
    UIImagePickerController *_presentedPicker;
    _Bool _externalAssetSet;
    id <NTKCFaceDetailEditOptionSectionDelegate> delegate;
    UIViewController *_parentViewController;
}

+ (_Bool)supressesSectionForExternalAssets:(id)arg1;
+ (_Bool)hasSectionForFace:(id)arg1 forEditMode:(long long)arg2;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)_finalizeEditor;
- (void)_setRawPhoto:(id)arg1;
- (void)_setPhotoFromAsset:(id)arg1;
- (void)_setPhotoFromDictionary:(id)arg1;
- (void)setExternalAsset:(id)arg1;
- (void)_presentPhotoPicker;
- (_Bool)_handleDidSelectActionRowForOption:(id)arg1;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (_Bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)arg1;
- (void)setSelectedOptions:(id)arg1;
- (Class)editCellClass;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

