//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@interface CUIRenditionSliceInformation : NSObject <NSCopying>
{
    long long _renditionType;
    double _boundaries[4];
    struct CGRect _destinationRect;
    CDStruct_3c058996 _edgeInsets;
}

@property(readonly, nonatomic) CDStruct_3c058996 edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(readonly, nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (double)positionOfSliceBoundary:(unsigned long long)arg1;
- (struct CGSize)_bottomRightCapSize;
- (struct CGSize)_topLeftCapSize;
- (id)initWithRenditionType:(long long)arg1 destinationRect:(struct CGRect)arg2 topLeftInset:(struct CGSize)arg3 bottomRightInset:(struct CGSize)arg4;
- (id)initWithSliceInformation:(id)arg1 destinationRect:(struct CGRect)arg2;

@end

