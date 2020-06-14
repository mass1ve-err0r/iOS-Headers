//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TKAdaptiveImage_Trait : NSObject
{
    _Bool _useReadableWidth;
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
    NSURL *_url;
    double _quality;
    struct CGSize _size;
    struct CGSize _relativeSize;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    struct CGRect _crop;
}

@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGRect crop; // @synthesize crop=_crop;
@property(nonatomic) struct CGSize relativeSize; // @synthesize relativeSize=_relativeSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool useReadableWidth; // @synthesize useReadableWidth=_useReadableWidth;
@property(nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property(nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
- (void).cxx_destruct;
- (_Bool)compatibleWithTrait:(id)arg1;
- (id)init;

@end

