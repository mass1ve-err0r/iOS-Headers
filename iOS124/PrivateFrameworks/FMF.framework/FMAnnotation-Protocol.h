//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMF/NSObject-Protocol.h>

@class FMAccuracyOverlay, NSString, UIColor, UIImage;

@protocol FMAnnotation <NSObject>
@property(retain, nonatomic) UIImage *smallOverlayIcon;
@property(retain, nonatomic) UIImage *largeOverlayIcon;
@property(retain, nonatomic) UIImage *smallAnnotationIcon;
@property(retain, nonatomic) UIImage *largeAnnotationIcon;
@property(retain, nonatomic) UIColor *tintColor;
@property(nonatomic) _Bool isBorderEnabled;
@property(nonatomic) double distanceFromUser;
@property(nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) double horizontalAccuracy;
@property(retain, nonatomic) FMAccuracyOverlay *overlay;
- (_Bool)isThisDevice;
- (_Bool)hasKnownLocation;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@end

