/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSURL, MLPhoto;



@interface PLVideoFileGroup : NSObject 
{
    NSURL *_url;
    MLPhoto *_photo;
}


- (id)initWithURL:(id)arg1 forMLPhoto:(id)arg2;
- (void)dealloc;
- (BOOL)hasVideoFile;
- (id)pathForVideoFile;
- (BOOL)hasThumbnail;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (id)pathForVideoPreviewFile;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForLowResolutionFile;
- (id)pathForTrimmedVideoFile;

@end