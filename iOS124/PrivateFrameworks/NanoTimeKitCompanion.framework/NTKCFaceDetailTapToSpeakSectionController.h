//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCellDelegate-Protocol.h>

@class NPSDomainAccessor, NSString, NTKCFaceDetailTapToSpeakCell, NTKCFaceDetailTapToSpeakDescriptionCell;

@interface NTKCFaceDetailTapToSpeakSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate>
{
    NTKCFaceDetailTapToSpeakCell *_tapCell;
    NTKCFaceDetailTapToSpeakDescriptionCell *_descriptionCell;
    NPSDomainAccessor *_tapToSpeakDomainAccessor;
}

+ (_Bool)hasTapToSpeakSectionForFace:(id)arg1 inGallery:(_Bool)arg2;
@property(retain, nonatomic) NPSDomainAccessor *tapToSpeakDomainAccessor; // @synthesize tapToSpeakDomainAccessor=_tapToSpeakDomainAccessor;
@property(retain, nonatomic) NTKCFaceDetailTapToSpeakDescriptionCell *descriptionCell; // @synthesize descriptionCell=_descriptionCell;
@property(retain, nonatomic) NTKCFaceDetailTapToSpeakCell *tapCell; // @synthesize tapCell=_tapCell;
- (void).cxx_destruct;
- (void)toggleCell:(id)arg1 didToggle:(_Bool)arg2;
- (void)faceDidChange;
- (id)titleForHeader;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

