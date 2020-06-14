//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/NSCopying-Protocol.h>

@interface CCUIControlCenterPositionProviderPackingRule : NSObject <NSCopying>
{
    unsigned long long _packFrom;
    unsigned long long _packingOrder;
    struct CCUILayoutSize _sizeLimit;
}

@property(readonly, nonatomic) struct CCUILayoutSize sizeLimit; // @synthesize sizeLimit=_sizeLimit;
@property(readonly, nonatomic) unsigned long long packingOrder; // @synthesize packingOrder=_packingOrder;
@property(readonly, nonatomic) unsigned long long packFrom; // @synthesize packFrom=_packFrom;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPackFrom:(unsigned long long)arg1 packingOrder:(unsigned long long)arg2 sizeLimit:(struct CCUILayoutSize)arg3;

@end

