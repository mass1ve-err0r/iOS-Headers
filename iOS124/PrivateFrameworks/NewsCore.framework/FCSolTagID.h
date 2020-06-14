//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface FCSolTagID : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isFavorited;
    _Bool _isAutoFavorited;
    _Bool _isGroupable;
    NSString *_identifier;
    unsigned long long _whitelistLevel;
    double _specificity;
}

+ (_Bool)supportsSecureCoding;
+ (id)discardedOrphanID;
+ (id)orphanID;
@property(nonatomic) _Bool isGroupable; // @synthesize isGroupable=_isGroupable;
@property(nonatomic) _Bool isAutoFavorited; // @synthesize isAutoFavorited=_isAutoFavorited;
@property(nonatomic) _Bool isFavorited; // @synthesize isFavorited=_isFavorited;
@property(nonatomic) double specificity; // @synthesize specificity=_specificity;
@property(nonatomic) unsigned long long whitelistLevel; // @synthesize whitelistLevel=_whitelistLevel;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 subscibedTags:(id)arg2 autoFavoritedTags:(id)arg3 groupableTags:(id)arg4 whitelistLevel:(unsigned long long)arg5 rules:(id)arg6;
- (id)initWithID:(id)arg1;

@end

