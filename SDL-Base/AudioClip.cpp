#include "AudioClip.h"

AudioClip::AudioClip(std::string path, int volume) : mChunk(Mix_LoadWAV(path.c_str()), Mix_FreeChunk) {
	if (!mChunk.get()) {
	}
	Mix_VolumeChunk(mChunk.get(), volume);
}

AudioClip::~AudioClip() {
	Free();
}

void AudioClip::Play() {
	Mix_PlayChannel(-1, mChunk.get(), 0);
}

void AudioClip::Free() {
	Mix_FreeChunk(mChunk.get());
}