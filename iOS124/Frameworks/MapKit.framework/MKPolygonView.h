//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKOverlayPathView.h>

@class MKPolygon;

@interface MKPolygonView : MKOverlayPathView
{
}

- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)createPath;
@property(readonly, nonatomic) MKPolygon *polygon;
- (id)initWithPolygon:(id)arg1;

@end

