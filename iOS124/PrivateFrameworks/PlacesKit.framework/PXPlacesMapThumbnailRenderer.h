//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapAnnotationPopoverImageRenderer-Protocol.h>
#import <PlacesKit/PXPlacesMapGeotaggableInfoDelegate-Protocol.h>

@class NSString, PKExtendedTraitCollection;
@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate>
{
    unsigned long long _popoverImageType;
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id <PXPlacesMapGeotaggableInfoDelegate> _informationDelegate;
    PKExtendedTraitCollection *_extendedTraitCollection;
    id _extendedTraitObserver;
}

@property(retain) id extendedTraitObserver; // @synthesize extendedTraitObserver=_extendedTraitObserver;
@property(retain) PKExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(retain) id <PXPlacesMapGeotaggableInfoDelegate> informationDelegate; // @synthesize informationDelegate=_informationDelegate;
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
@property(readonly) unsigned long long popoverImageType; // @synthesize popoverImageType=_popoverImageType;
- (void).cxx_destruct;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)reset;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D)arg2;
- (_Bool)supportsMoveAnimations;
@property(readonly) struct UIEdgeInsets minimumEdgeInsets;
- (long long)annotationType;
- (void)dealloc;
- (id)initWithTraitCollection:(id)arg1 andInforamtionDelegate:(id)arg2 popoverImageType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

