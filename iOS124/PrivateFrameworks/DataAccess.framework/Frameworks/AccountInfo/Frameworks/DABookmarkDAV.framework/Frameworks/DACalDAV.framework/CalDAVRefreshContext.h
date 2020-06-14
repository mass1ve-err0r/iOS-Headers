//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CalDAVRefreshContext : NSObject
{
    _Bool _isForced;
    _Bool _wasUserRequested;
    _Bool _wasDueToPush;
    _Bool _isCalendarsOnly;
    _Bool _didDownloadEvents;
    _Bool _didSaveDatabase;
    _Bool _shouldSave;
    _Bool _shouldSaveAccounts;
    _Bool _calendarFailedToSync;
    _Bool _shouldRetry;
    int _retryTime;
    double _startTime;
    unsigned long long _numDownloadedElements;
    unsigned long long _numUploadedElements;
    NSError *_error;
    unsigned long long _localItems;
}

+ (id)defaultContext;
@property(nonatomic) unsigned long long localItems; // @synthesize localItems=_localItems;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int retryTime; // @synthesize retryTime=_retryTime;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(nonatomic) unsigned long long numUploadedElements; // @synthesize numUploadedElements=_numUploadedElements;
@property(nonatomic) unsigned long long numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool calendarFailedToSync; // @synthesize calendarFailedToSync=_calendarFailedToSync;
@property(nonatomic) _Bool shouldSaveAccounts; // @synthesize shouldSaveAccounts=_shouldSaveAccounts;
@property(nonatomic) _Bool shouldSave; // @synthesize shouldSave=_shouldSave;
@property(nonatomic) _Bool didSaveDatabase; // @synthesize didSaveDatabase=_didSaveDatabase;
@property(nonatomic) _Bool didDownloadEvents; // @synthesize didDownloadEvents=_didDownloadEvents;
@property(nonatomic) _Bool isCalendarsOnly; // @synthesize isCalendarsOnly=_isCalendarsOnly;
@property(nonatomic) _Bool wasDueToPush; // @synthesize wasDueToPush=_wasDueToPush;
@property(nonatomic) _Bool wasUserRequested; // @synthesize wasUserRequested=_wasUserRequested;
@property(nonatomic) _Bool isForced; // @synthesize isForced=_isForced;
- (void).cxx_destruct;

@end

