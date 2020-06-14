//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGMailAttachment : NSObject
{
    _Bool _isDownloadedLocally;
    NSString *_type;
    NSString *_filename;
    NSString *_path;
}

+ (id)attachmentsFromSearchableItem:(id)arg1;
+ (id)attachmentWithType:(id)arg1 filename:(id)arg2 path:(id)arg3;
@property(readonly, nonatomic) _Bool isDownloadedLocally; // @synthesize isDownloadedLocally=_isDownloadedLocally;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isCalendarMimeType; // @dynamic isCalendarMimeType;
- (id)initWithType:(id)arg1 filename:(id)arg2 path:(id)arg3;

@end

