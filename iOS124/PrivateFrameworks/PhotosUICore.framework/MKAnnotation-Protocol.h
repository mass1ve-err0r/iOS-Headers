//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;

@protocol MKAnnotation <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@end

