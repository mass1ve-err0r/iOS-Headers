//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPACropOperator : IPAGeometryOperator
{
    struct CGRect _cropRect;
}

+ (id)operatorWithIdentifier:(id)arg1 cropRect:(struct CGRect)arg2;
+ (id)operatorWithCropRect:(struct CGRect)arg1;
- (id)description;
- (id)transformForGeometry:(id)arg1;

@end

