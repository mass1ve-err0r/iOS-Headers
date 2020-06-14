//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSManagedObjectID, NSString, PXCMMAssetsProgressListener, PXCMMInvitationView, PXGadgetSpec, UIColor, UILongPressGestureRecognizer;
@protocol PXCMMInvitation, PXCMMInvitationGadgetDelegate, PXGadgetDelegate;

@interface PXCMMInvitationGadget : NSObject <PXChangeObserver, PXGadget>
{
    id <PXCMMInvitation> _invitation;
    PXCMMInvitationView *_invitationView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    NSManagedObjectID *_objectID;
    UIColor *_backgroundColor;
    id <PXCMMInvitationGadgetDelegate> _invitationGadgetDelegate;
    PXCMMAssetsProgressListener *_assetsProgressListener;
}

@property(retain, nonatomic) PXCMMAssetsProgressListener *assetsProgressListener; // @synthesize assetsProgressListener=_assetsProgressListener;
@property(nonatomic) __weak id <PXCMMInvitationGadgetDelegate> invitationGadgetDelegate; // @synthesize invitationGadgetDelegate=_invitationGadgetDelegate;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (void)_longPressGesture:(id)arg1;
- (void)_updateLongPressGestureRecognizer;
- (void)commitPreviewViewController:(id)arg1;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2 outSourceRect:(out struct CGRect *)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_tapGesture:(id)arg1;
- (void)_updateExpirationTitle;
- (void)_updateStatusString;
- (void)_updateTitle;
- (void)_registerAssetsProgressListenerForInvitation:(id)arg1;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_changeViewConfiguration:(CDUnknownBlockType)arg1;
- (void)_loadInvitation:(id)arg1;
@property(retain, nonatomic) id <PXCMMInvitation> invitation;
- (void)contentHasBeenSeen;
- (id)uniqueGadgetIdentifier;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(readonly, nonatomic) _Bool supportsHighlighting;
- (struct NSObject *)contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)ppt_presentDetailView;
- (void)presentInvitationAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(nonatomic) struct CGRect visibleContentRect;

@end

