/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImageMediaObject : CKImageMediaObject

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;

- (id)animatedImageForWidth:(double)arg1;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)generateAndPersistAnimatedPreviewFromImageData:(id)arg1 forWidth:(double)arg2 withTransferGUID:(id)arg3 isSticker:(bool)arg4;
- (id)generateThumbnailsForWidth:(double)arg1 isSticker:(bool)arg2 orientation:(BOOL)arg3;
- (id /* block */)imageEdgeEnhancementBlockIfNecessary;
- (id)metricsCollectorMediaType;
- (bool)needsAnimation;
- (id)notificationCenter;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)prewarmPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (id)scaledThumbnailFromThumbnail:(id)arg1 forWidth:(double)arg2 isSticker:(bool)arg3;
- (id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 imageData:(id)arg3 isSticker:(bool)arg4 orientation:(BOOL)arg5;
- (bool)validPreviewExistsAtURL:(id)arg1;
- (bool)validatePreviewFormat;

@end