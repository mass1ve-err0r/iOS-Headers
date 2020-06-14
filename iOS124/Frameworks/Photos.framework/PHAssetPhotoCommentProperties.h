//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoCommentProperties : PHAssetPropertySet
{
    _Bool _hasUserLiked;
    unsigned long long _commentCount;
    unsigned long long _likeCount;
}

+ (id)propertiesToFetch;
+ (_Bool)isToMany;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)entityName;
+ (id)propertySetName;
@property(readonly, nonatomic) _Bool hasUserLiked; // @synthesize hasUserLiked=_hasUserLiked;
@property(readonly, nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(readonly, nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end

