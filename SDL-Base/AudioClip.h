#pragma once

#ifndef _AUDIO_CLIP_H
#define _AUDIO_CLIP_H

#include <memory>
#include <SDL_mixer.h>
#include <string>

class AudioClip {
public:
	AudioClip(std::string path, int volume);
	~AudioClip();
	void Play();
	void Free();
private:
	std::unique_ptr<Mix_Chunk, void (*) (Mix_Chunk*)> mChunk;
protected:
};

#endif // !_AUDIO_CLIP_H

