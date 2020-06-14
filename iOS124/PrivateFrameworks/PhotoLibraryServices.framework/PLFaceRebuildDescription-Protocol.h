//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@protocol PLFaceRebuildDescription <NSObject>
@property(readonly, nonatomic, getter=isClusterRejected) _Bool clusterRejected;
@property(readonly, nonatomic) int cloudNameSource;
@property(readonly, nonatomic) int nameSource;
@property(readonly, nonatomic, getter=isRepresentative) _Bool representative;
@property(readonly, nonatomic, getter=isManual) _Bool manual;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
@end

